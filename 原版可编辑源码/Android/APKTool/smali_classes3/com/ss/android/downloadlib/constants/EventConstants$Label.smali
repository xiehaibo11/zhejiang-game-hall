.class public interface abstract annotation Lcom/ss/android/downloadlib/constants/EventConstants$Label;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/annotation/Annotation;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/constants/EventConstants;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2609
    name = "Label"
.end annotation

.annotation runtime Ljava/lang/annotation/Retention;
    value = .enum Ljava/lang/annotation/RetentionPolicy;->SOURCE:Ljava/lang/annotation/RetentionPolicy;
.end annotation


# static fields
.field public static final ADD_ORDER_DOWNLOAD:Ljava/lang/String; = "add_order_download"

.field public static final ANTI_HIJACK_RESULT:Ljava/lang/String; = "ah_result"

.field public static final ANTI_MARKET_RESULT:Ljava/lang/String; = "am_result"

.field public static final API_HIJACK:Ljava/lang/String; = "api_hijack"

.field public static final APPLINK_CLICK:Ljava/lang/String; = "applink_click"

.field public static final BACK_DIALOG_EXIT:Ljava/lang/String; = "backdialog_exit"

.field public static final BACK_DIALOG_INSTALL:Ljava/lang/String; = "backdialog_install"

.field public static final BACK_DIALOG_SHOW:Ljava/lang/String; = "backdialog_show"

.field public static final CLICK:Ljava/lang/String; = "click"

.field public static final CLICK_CONTINUE:Ljava/lang/String; = "click_continue"

.field public static final CLICK_INSTALL:Ljava/lang/String; = "click_install"

.field public static final CLICK_PAUSE:Ljava/lang/String; = "click_pause"

.field public static final CLICK_START:Ljava/lang/String; = "click_start"

.field public static final DEEPLINK_APP_OPEN:Ljava/lang/String; = "deeplink_app_open"

.field public static final DEEPLINK_APP_OPEN_FAIL:Ljava/lang/String; = "deeplink_app_open_fail"

.field public static final DEEPLINK_FAILED:Ljava/lang/String; = "deeplink_failed"

.field public static final DEEPLINK_QUICKAPP_FAILED:Ljava/lang/String; = "deeplink_quickapp_failed"

.field public static final DEEPLINK_QUICKAPP_SUCCESS:Ljava/lang/String; = "deeplink_quickapp_success"

.field public static final DEEPLINK_SUCCESS:Ljava/lang/String; = "deeplink_success"

.field public static final DEEPLINK_URL_OPEN:Ljava/lang/String; = "deeplink_url_open"

.field public static final DEEPLINK_URL_OPEN_FAIL:Ljava/lang/String; = "deeplink_url_open_fail"

.field public static final DELAY_INSTALLED:Ljava/lang/String; = "delayinstall_installed"

.field public static final DELAY_INSTALL_CONFLICT:Ljava/lang/String; = "delayinstall_conflict_with_back_dialog"

.field public static final DELAY_INSTALL_LOST:Ljava/lang/String; = "delayinstall_file_lost"

.field public static final DELAY_INSTALL_START:Ljava/lang/String; = "delayinstall_install_start"

.field public static final DOWNLOAD_CANCEL:Ljava/lang/String; = "download_cancel"

.field public static final DOWNLOAD_FAILED:Ljava/lang/String; = "download_failed"

.field public static final DOWNLOAD_FAILED_FINALLY:Ljava/lang/String; = "download_failed_finally"

.field public static final DOWNLOAD_FINISH:Ljava/lang/String; = "download_finish"

.field public static final DOWNLOAD_RESUME:Ljava/lang/String; = "download_resume"

.field public static final DOWNLOAD_UNCOMPLETED:Ljava/lang/String; = "download_uncompleted"

.field public static final FILE_STATUS:Ljava/lang/String; = "file_status"

.field public static final INSTALL_FAILED:Ljava/lang/String; = "install_failed"

.field public static final INSTALL_FINISH:Ljava/lang/String; = "install_finish"

.field public static final INSTALL_FINISH_HIJACK:Ljava/lang/String; = "install_finish_hijack"

.field public static final INSTALL_FINISH_MAY_HIJACK:Ljava/lang/String; = "install_finish_may_hijack"

.field public static final INSTALL_GUIDE_SHOW:Ljava/lang/String; = "install_guide_show"

.field public static final INSTALL_WINDOW_SHOW:Ljava/lang/String; = "install_window_show"

.field public static final LP_APP_DIALOG_CLICK:Ljava/lang/String; = "lp_app_dialog_click"

.field public static final LP_APP_DIALOG_SHOW:Ljava/lang/String; = "lp_app_dialog_show"

.field public static final LP_APP_DIALOG_TRY_SHOW:Ljava/lang/String; = "lp_app_dialog_try_show"

.field public static final LP_COMPLIANCE_ERROR:Ljava/lang/String; = "lp_compliance_error"

.field public static final LP_DOWNLOAD_DIALOG_CANCEL:Ljava/lang/String; = "landing_download_dialog_cancel"

.field public static final LP_DOWNLOAD_DIALOG_CONFIRM:Ljava/lang/String; = "landing_download_dialog_confirm"

.field public static final LP_DOWNLOAD_DIALOG_SHOW:Ljava/lang/String; = "landing_download_dialog_show"

.field public static final MARKET_CLICK_OPEN:Ljava/lang/String; = "market_click_open"

.field public static final MARKET_OPEN_FAILED:Ljava/lang/String; = "market_open_failed"

.field public static final MARKET_OPEN_SUCCESS:Ljava/lang/String; = "market_open_success"

.field public static final NOTIFICATION_CLICK:Ljava/lang/String; = "download_notification_click"

.field public static final NOTIFICATION_CONTINUE:Ljava/lang/String; = "download_notification_continue"

.field public static final NOTIFICATION_INSTALL:Ljava/lang/String; = "download_notification_install"

.field public static final NOTIFICATION_PAUSE:Ljava/lang/String; = "download_notification_pause"

.field public static final NOTIFICATION_SHOW:Ljava/lang/String; = "download_notification_show"

.field public static final NOTIFICATION_TRY_SHOW:Ljava/lang/String; = "download_notification_try_show"

.field public static final OPEN_APP_DIALOG_CANCEL:Ljava/lang/String; = "market_openapp_cancel"

.field public static final OPEN_APP_DIALOG_SHOW:Ljava/lang/String; = "market_openapp_window_show"

.field public static final ORDER_DOWNLOAD_CHECK:Ljava/lang/String; = "order_download_check"

.field public static final ORDER_DOWNLOAD_QUERY:Ljava/lang/String; = "order_download_query"

.field public static final ORDER_DOWNLOAD_QUERY_RESULT:Ljava/lang/String; = "order_download_query_result"

.field public static final PACKAGE_NAME_ERROR:Ljava/lang/String; = "package_name_error"

.field public static final PAUSE_RESERVE_WIFI_CANCEL:Ljava/lang/String; = "pause_reserve_wifi_cancel"

.field public static final PAUSE_RESERVE_WIFI_CANCEL_ON_WIFI:Ljava/lang/String; = "pause_reserve_wifi_cancel_on_wifi"

.field public static final PAUSE_RESERVE_WIFI_CONFIRM:Ljava/lang/String; = "pause_reserve_wifi_confirm"

.field public static final PAUSE_RESERVE_WIFI_CONTINUE:Ljava/lang/String; = "pause_reserve_wifi_continue"

.field public static final PAUSE_RESERVE_WIFI_DIALOG_SHOW:Ljava/lang/String; = "pause_reserve_wifi_dialog_show"

.field public static final STORAGE_DENY:Ljava/lang/String; = "storage_deny"

.field public static final UNITY:Ljava/lang/String; = "ttdownloader_unity"
