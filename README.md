Configuration file:
- config.ini
The following parameters should be passed inside the config file - id,name,description,version,author,type,min_version
- id | The plugin unique name (A-Za-z0-9)
- name | The plugin friendly name
- description | The plugin description
- version | The plugin version (e.g. 1.0.0)
- author | The plugin Author
- type | The plugin type (available types: destination,security,addon)
- min_version | The JetBackup minimum version that this plugin can be installed on (e.g. 5.0.0)

Executable files:
- install | will be executed in the plugin installation process
- uninstall | will be executed in the plugin removal process
- update | will be executed in the plugin update process

AngularJS files:
- controller.js
- view.htm
- lang/*.json

Languages:
add you language files inside the "lang" directory.
the language file should be named with the language code (e.g. en.json OR en_US.json)

Media:
all the files located at the "media" directory will be public and you will be able to use them inside the GUI

PHP file:
- *.inc
the file name should be the same name as the "id" you set inside the config.ini file (e.g. HelloWorld.inc)