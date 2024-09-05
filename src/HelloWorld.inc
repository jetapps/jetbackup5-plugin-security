<?php
/*
*
* JetBackup @ package
* Created By Idan Ben-Ezra
*
* Copyrights @ JetApps
* https://www.jetapps.com
*
**/
namespace JetBackup\Core\Security\HelloWorld;

use JetBackup\Core\Exception\ValidationException;
use JetBackup\Core\Log\LogController;
use JetBackup\Core\Security\Integration\InfectedFile;
use JetBackup\Core\Security\Integration\Security;

defined( '__JETBACKUP__' ) or die( 'Restricted access' );


class HelloWorld implements Security {

	/**
	 * @return void
	 */
	public function activate():void {
	}

	/**
	 * @return void
	 */
	public function deactivate():void {
	}

	/**
	 * @return void
	 * @throws ValidationException
	 */
	public function validateFields():void {
	}

	/**
	 * @param object $data
	 *
	 * @return void
	 */
	public function setData(object $data):void {
	}

	/**
	 * @return array
	 */
	public function getData(): array {
	}

	/**
	 * @param string $data
	 *
	 * @return void
	 */
	public function setSerializedData(string $data):void {
	}

	/**
	 * @return string
	 */
	public function getSerializedData(): string {
	}

	/**
	 * @return array
	 */
	public function protectedFields(): array {
	}

	/**
	 * @return void
	 */
	public function routineTasks(): void {
	}

	/**
	 * @param array $paths
	 *
	 * @return void
	 */
	public function addIgnorePaths(array $paths): void {
	}

	/**
	 * @param array $paths
	 *
	 * @return void
	 */
	public function removeIgnorePaths(array $paths): void {
	}

	/**
	 * @param string $file
	 *
	 * @return bool
	 */
	public function scanFile(string $file): bool {
	}

	/**
	 * @param array $args
	 * @param string $stdin
	 *
	 * @return InfectedFile[]
	 */
	public function parseData(array $args, string $stdin): array {
	}

	/**
	 * @return string|null
	 */
	public function scriptOwnership(): string|null {
	}

	/**
	 * @param LogController $logController
	 *
	 * @return void
	 */
	public function setLogController(LogController $logController): void {
	}

	/**
	 * @return LogController
	 */
	public function getLogController(): LogController {
	}
}