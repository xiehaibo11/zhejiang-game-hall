.class public Lcom/ymnsdk/replugin/event/base/EventCode;
.super Ljava/lang/Object;
.source "EventCode.java"


# static fields
.field public static final apk_download_apk_event:I = 0x21f09

.field public static final apk_download_patch_event:I = 0x21f0a

.field public static final download_end_event:I = 0x21f0c

.field public static final download_restart_event:I = 0x21f0d

.field public static final download_start_event:I = 0x21f0b

.field public static final get_plugins_info_request_event:I = 0x21ef8

.field public static final get_plugins_info_response_event:I = 0x21ef9

.field public static final get_state_success_event:I = 0x21efe

.field public static final install_plugin_request_event:I = 0x21efc

.field public static final install_plugin_response_event:I = 0x21efd

.field public static final is_install_plugin_request_event:I = 0x21eff

.field public static final is_install_plugin_response_event:I = 0x21f00

.field public static final merge_plugin_request_event:I = 0x21f07

.field public static final merge_plugin_response_event:I = 0x21f08

.field public static final plugin_exit_event:I = 0x21f0e

.field public static final preload_plugin_request_event:I = 0x21f05

.field public static final preload_plugin_response_event:I = 0x21f06

.field public static final query_plugin_status_request_event:I = 0x21efa

.field public static final query_plugin_status_response_event:I = 0x21efb

.field public static final start_apk_request_event:I = 0x21f01

.field public static final start_apk_response_event:I = 0x21f02

.field public static final uninstall_plugin_request_event:I = 0x21f03

.field public static final uninstall_plugin_response_event:I = 0x21f04


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
