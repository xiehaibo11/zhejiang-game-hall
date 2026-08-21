
/* register_all_cocos2dx_network_manual(se::Object*) */

undefined8 register_all_cocos2dx_network_manual(Object *param_1)

{
  se::Object::defineFunction
            (__jsb_cocos2d_network_Downloader_proto,"createDownloadFileTask",
             js_cocos2dx_network_Downloader_createDownloadFileTaskRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_network_Downloader_proto,"setOnTaskError",
             js_network_Downloader_setOnTaskErrorRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_network_Downloader_proto,"setOnFileTaskSuccess",
             js_network_Downloader_setOnFileTaskSuccessRegistry);
  return 1;
}

