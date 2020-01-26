'use strict';

define(['app'], function(app) {

	// your controller name must start with the plugin type (destination,security or addon) then the plugin code e.g. addonHelloWorld
	app.controller("addonHelloWorld", ["$scope", "lang", "api", function ($scope, lang, api) {

		// $scope.publicDir -> plugin public media dir

	}]);

	app.controller("addonHelloWorld_Extra", ["$scope", "lang", function ($scope, lang) {
	}]);

});