



class CfgExileCustomCode
{
	//Modifed by Thomas [T.K.O]  
	ExileClient_gui_xm8_slide_territory_onOpen = "Custom\ExileClient_gui_xm8_slide_territory_onOpen.sqf";
	ExileClient_gui_escape_suicide = "Custom\ExileClient_gui_escape_suicide.sqf";
	///BauenNichtErlaubt
	ExileClient_object_construction_move = "Custom\ExileClient_object_construction_move.sqf";
	ExileClient_construction_beginExistingObject = "Custom\ExileClient_construction_beginExistingObject.sqf";
	ExileClient_object_item_construct = "Custom\ExileClient_object_item_construct.sqf";
	ExileClient_construction_beginNewObject = "Custom\ExileClient_construction_beginNewObject.sqf";
	///Außerhalb am Strahlen
	ExileClient_system_radiation_thread_update = "Custom\ExileClient_system_radiation_thread_update.sqf";
    ExileClient_util_world_getNearestLocationName = "Custom\ExileClient_util_world_getNearestLocationName.sqf";		
	///KARREN FIX
	ExileServer_system_trading_network_purchaseVehicleRequest = "custom\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	///VECTOR
    ExileClient_gui_constructionMode_update = "SM\Vector\SM_gui_constructionMode_update.sqf";
	ExileClient_gui_hud_event_onKeyUp = "SM\Vector\SM_gui_hud_event_onKeyUp.sqf";
	ExileClient_construction_thread = "SM\Vector\SM_construction_thread.sqf";
	///BOX VERKAUF
	ExileClient_gui_traderDialog_updateInventoryDropdown = "overrides\ExileClient_gui_traderDialog_updateInventoryDropdown.sqf";
	ExileClient_gui_wasteDumpDialog_show = "overrides\ExileClient_gui_wasteDumpDialog_show.sqf";
	ExileServer_system_trading_network_wasteDumpRequest = "overrides\ExileServer_system_trading_network_wasteDumpRequest.sqf";	
	///ABHOLZEN
	ExileServer_object_tree_network_chopTreeRequest = "overrides\AbHolzen\ExileServer_object_tree_network_chopTreeRequest.sqf";
    ///KILL NACHRICHT
	ExileServer_object_player_event_onMpKilled = "addons\KillMessage\ExileServer_object_player_event_onMpKilled.sqf";
    ExileServer_util_getFragPerks = "addons\KillMessage\ExileServer_util_getFragPerks.sqf";
	///REPAIR
	ExileClient_action_repairVehicle_condition ="overrides\ExileClient_action_repairVehicle_condition.sqf";
	///ExAd XM8
    ExileClient_gui_xm8_slide                       = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_slide.sqf";
    ExileClient_gui_xm8_show                        = "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
    ExileServer_system_territory_database_load      = "ExAdClient\VirtualGarage\CustomCode\ExileServer_system_territory_database_load.sqf";
	ExileClient_gui_virtualGarageDialog_show        = "overrides\ExileClient_gui_virtualGarageDialog_show.sqf";
	///MALEN
	ExileServer_object_construction_database_load = "SM_Paint\overrides\ExileServer_object_construction_database_load.sqf";
	///
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick = "SM\SpawnSelect\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show = "SM\SpawnSelect\ExileClient_gui_selectSpawnLocation_show.sqf";
	ExileServer_object_player_createBambi = "SM_SpawnSelect\override\ExileServer_object_player_createBambi.sqf";
	ExileServer_object_player_network_createPlayerRequest = "SM_SpawnSelect\override\ExileServer_object_player_network_createPlayerRequest.sqf";
	///64bit
	ExileServer_world_initialize = "Exile_Server_Overrides\ExileServer_world_initialize.sqf";
	ExileServer_util_time_uptime = "Exile_Server_Overrides\ExileServer_util_time_uptime.sqf";
	ExileServer_util_time_addTime = "Exile_Server_Overrides\ExileServer_util_time_addTime.sqf";
	ExileServer_util_time_currentTime = "Exile_Server_Overrides\ExileServer_util_time_currentTime.sqf";
	ExileServer_system_database_connect = "Exile_Server_Overrides\ExileServer_system_database_connect.sqf";
	ExileServer_system_database_handleBig = "Exile_Server_Overrides\ExileServer_system_database_handleBig.sqf";
	ExileServer_system_process_noobFilter = "Exile_Server_Overrides\ExileServer_system_process_noobFilter.sqf";
	ExileServer_object_player_database_load = "Exile_Server_Overrides\ExileServer_object_player_database_load.sqf";
	ExileServer_object_vehicle_database_load = "Exile_Server_Overrides\ExileServer_object_vehicle_database_load.sqf";
	ExileServer_object_container_database_load = "Exile_Server_Overrides\ExileServer_object_container_database_load.sqf";
	ExileServer_object_container_database_insert = "Exile_Server_Overrides\ExileServer_object_container_database_insert.sqf";
	ExileServer_system_territory_database_insert = "Exile_Server_Overrides\ExileServer_system_territory_database_insert.sqf";
	ExileServer_object_container_database_update = "Exile_Server_Overrides\ExileServer_object_container_database_update.sqf";
	ExileServer_object_container_createContainer = "Exile_Server_Overrides\ExileServer_object_container_createContainer.sqf";
	ExileServer_system_database_query_selectFull = "Exile_Server_Overrides\ExileServer_system_database_query_selectFull.sqf";
	ExileServer_system_database_query_insertSingle = "Exile_Server_Overrides\ExileServer_system_database_query_insertSingle.sqf";
	ExileServer_system_database_query_selectSingle = "Exile_Server_Overrides\ExileServer_system_database_query_selectSingle.sqf";
	ExileServer_object_construction_database_insert = "Exile_Server_Overrides\ExileServer_object_construction_database_insert.sqf";
	ExileServer_system_simulationMonitor_initialize = "Exile_Server_Overrides\ExileServer_system_simulationMonitor_initialize.sqf";
	ExileServer_system_database_query_fireAndForget = "Exile_Server_Overrides\ExileServer_system_database_query_fireAndForget.sqf";
	ExileServer_object_vehicle_createPersistentVehicle = "Exile_Server_Overrides\ExileServer_object_vehicle_createPersistentVehicle.sqf";
	ExileServer_system_trading_network_sellItemRequest = "Exile_Server_Overrides\ExileServer_system_trading_network_sellItemRequest.sqf";
	ExileServer_system_database_query_selectSingleField = "Exile_Server_Overrides\ExileServer_system_database_query_selectSingleField.sqf";
	ExileServer_object_vehicle_createNonPersistentVehicle = "Exile_Server_Overrides\ExileServer_object_vehicle_createNonPersistentVehicle.sqf";
	ExileServer_system_territory_network_purchaseTerritory = "Exile_Server_Overrides\ExileServer_system_territory_network_purchaseTerritory.sqf";
	ExileServer_system_territory_network_flagStolenRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_flagStolenRequest.sqf";
	ExileServer_system_trading_network_purchaseItemRequest = "Exile_Server_Overrides\ExileServer_system_trading_network_purchaseItemRequest.sqf";
	ExileServer_system_territory_network_restoreFlagRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_restoreFlagRequest.sqf";
	ExileServer_system_territory_network_payFlagRansomRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_payFlagRansomRequest.sqf";
	ExileServer_object_vehicle_network_retrieveVehicleRequest = "Exile_Server_Overrides\ExileServer_object_vehicle_network_retrieveVehicleRequest.sqf";
	ExileServer_system_territory_maintenance_recalculateDueDate = "Exile_Server_Overrides\ExileServer_system_territory_maintenance_recalculateDueDate.sqf";
	ExileServer_system_territory_network_territoryUpgradeRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_territoryUpgradeRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleSkinRequest = "Exile_Server_Overrides\ExileServer_system_trading_network_purchaseVehicleSkinRequest.sqf";
	ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest = "Exile_Server_Overrides\ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest.sqf";
	///64Bit
    ///Toast
	ExileClient_object_player_event_onEnterSafezone = "Custom\ExileClient_object_player_event_onEnterSafezone.sqf";
	ExileClient_object_player_event_onLeaveSafezone = "Custom\ExileClient_object_player_event_onLeaveSafezone.sqf";
	ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //Happys Revive
	ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65	
	
};
