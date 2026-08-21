.class public Lcom/ymnsdk/replugin/event/base/CustEvent;
.super Ljava/lang/Object;
.source "CustEvent.java"


# instance fields
.field private android_id:Ljava/lang/String;

.field private buyu_uid:Ljava/lang/String;

.field private buyu_version:Ljava/lang/String;

.field private cpsid:Ljava/lang/String;

.field private download_progress:Ljava/lang/String;

.field private download_size:Ljava/lang/String;

.field private framework_version:Ljava/lang/String;

.field private host_app_info:Ljava/lang/String;

.field private host_id:Ljava/lang/String;

.field private is_allow:I

.field private is_new_user:I

.field private ispatch:I

.field private login_json_str:Ljava/lang/String;

.field private plugin_id:Ljava/lang/String;

.field private reason:I

.field private request_code:Ljava/lang/String;

.field private request_duration:Ljava/lang/String;

.field private request_msg:Ljava/lang/String;

.field private request_server_type:Ljava/lang/String;

.field private restart_num:Ljava/lang/String;

.field private scene_id:I

.field private source:I

.field private trace:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    .line 60
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 61
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getRepluginTrace()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->trace:Ljava/lang/String;

    .line 62
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/event/base/CustEvent;->getAndroid(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->android_id:Ljava/lang/String;

    .line 63
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getAppInfo()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->host_app_info:Ljava/lang/String;

    .line 64
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getAppId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->host_id:Ljava/lang/String;

    .line 65
    invoke-static {}, Lcom/ymnsdk/replugin/RePluginSdk;->getFrameworkVersion()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->framework_version:Ljava/lang/String;

    .line 66
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getCpSid()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->cpsid:Ljava/lang/String;

    .line 67
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getPluginId()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->plugin_id:Ljava/lang/String;

    return-void
.end method

.method private getAndroid(Landroid/app/Activity;)Ljava/lang/String;
    .locals 0

    .line 161
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/utilslib/device/DeviceInfo;->getAndroidId()Ljava/lang/String;

    move-result-object p1

    .line 162
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setAndroidId(Ljava/lang/String;)V

    return-object p1
.end method


# virtual methods
.method public getAndroid_id()Ljava/lang/String;
    .locals 1

    .line 80
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->android_id:Ljava/lang/String;

    return-object v0
.end method

.method public getBuyu_uid()Ljava/lang/String;
    .locals 1

    .line 191
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->buyu_uid:Ljava/lang/String;

    return-object v0
.end method

.method public getBuyu_version()Ljava/lang/String;
    .locals 1

    .line 247
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->buyu_version:Ljava/lang/String;

    return-object v0
.end method

.method public getCpsid()Ljava/lang/String;
    .locals 1

    .line 183
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->cpsid:Ljava/lang/String;

    return-object v0
.end method

.method public getDownload_progress()Ljava/lang/String;
    .locals 1

    .line 175
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->download_progress:Ljava/lang/String;

    return-object v0
.end method

.method public getDownload_size()Ljava/lang/String;
    .locals 1

    .line 167
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->download_size:Ljava/lang/String;

    return-object v0
.end method

.method public getHost_app_info()Ljava/lang/String;
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->host_app_info:Ljava/lang/String;

    return-object v0
.end method

.method public getHost_id()Ljava/lang/String;
    .locals 1

    .line 144
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->host_id:Ljava/lang/String;

    return-object v0
.end method

.method public getIs_allow()I
    .locals 1

    .line 207
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->is_allow:I

    return v0
.end method

.method public getIs_new_user()I
    .locals 1

    .line 231
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->is_new_user:I

    return v0
.end method

.method public getIspatch()I
    .locals 1

    .line 215
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->ispatch:I

    return v0
.end method

.method public getLogin_json_str()Ljava/lang/String;
    .locals 1

    .line 136
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->login_json_str:Ljava/lang/String;

    return-object v0
.end method

.method public getPlugin_id()Ljava/lang/String;
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->plugin_id:Ljava/lang/String;

    return-object v0
.end method

.method public getReason()I
    .locals 1

    .line 223
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->reason:I

    return v0
.end method

.method public getRequest_code()Ljava/lang/String;
    .locals 1

    .line 88
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->request_code:Ljava/lang/String;

    return-object v0
.end method

.method public getRequest_duration()Ljava/lang/String;
    .locals 1

    .line 152
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->request_duration:Ljava/lang/String;

    return-object v0
.end method

.method public getRequest_msg()Ljava/lang/String;
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->request_msg:Ljava/lang/String;

    return-object v0
.end method

.method public getRequest_server_type()Ljava/lang/String;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->request_server_type:Ljava/lang/String;

    return-object v0
.end method

.method public getRestart_num()Ljava/lang/String;
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->restart_num:Ljava/lang/String;

    return-object v0
.end method

.method public getScene_id()I
    .locals 1

    .line 239
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->scene_id:I

    return v0
.end method

.method public getSource()I
    .locals 1

    .line 199
    iget v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->source:I

    return v0
.end method

.method public getTrace()Ljava/lang/String;
    .locals 1

    .line 72
    iget-object v0, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->trace:Ljava/lang/String;

    return-object v0
.end method

.method public setAndroid_id(Ljava/lang/String;)V
    .locals 0

    .line 84
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->android_id:Ljava/lang/String;

    return-void
.end method

.method public setBuyu_uid(Ljava/lang/String;)V
    .locals 0

    .line 195
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->buyu_uid:Ljava/lang/String;

    return-void
.end method

.method public setBuyu_version(Ljava/lang/String;)V
    .locals 0

    .line 251
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->buyu_version:Ljava/lang/String;

    return-void
.end method

.method public setCpsid(Ljava/lang/String;)V
    .locals 0

    .line 187
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->cpsid:Ljava/lang/String;

    return-void
.end method

.method public setDownload_progress(Ljava/lang/String;)V
    .locals 0

    .line 179
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->download_progress:Ljava/lang/String;

    return-void
.end method

.method public setDownload_size(Ljava/lang/String;)V
    .locals 0

    .line 171
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->download_size:Ljava/lang/String;

    return-void
.end method

.method public setHost_app_info(Ljava/lang/String;)V
    .locals 0

    .line 116
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->host_app_info:Ljava/lang/String;

    return-void
.end method

.method public setHost_id(Ljava/lang/String;)V
    .locals 0

    .line 148
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->host_id:Ljava/lang/String;

    return-void
.end method

.method public setIs_allow(I)V
    .locals 0

    .line 211
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->is_allow:I

    return-void
.end method

.method public setIs_new_user(I)V
    .locals 0

    .line 235
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->is_new_user:I

    return-void
.end method

.method public setIspatch(I)V
    .locals 0

    .line 219
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->ispatch:I

    return-void
.end method

.method public setLogin_json_str(Ljava/lang/String;)V
    .locals 0

    .line 140
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->login_json_str:Ljava/lang/String;

    return-void
.end method

.method public setPlugin_id(Ljava/lang/String;)V
    .locals 0

    .line 108
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->plugin_id:Ljava/lang/String;

    return-void
.end method

.method public setReason(I)V
    .locals 0

    .line 227
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->reason:I

    return-void
.end method

.method public setRequest_code(Ljava/lang/String;)V
    .locals 0

    .line 92
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->request_code:Ljava/lang/String;

    return-void
.end method

.method public setRequest_duration(Ljava/lang/String;)V
    .locals 0

    .line 156
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->request_duration:Ljava/lang/String;

    return-void
.end method

.method public setRequest_msg(Ljava/lang/String;)V
    .locals 0

    .line 100
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->request_msg:Ljava/lang/String;

    return-void
.end method

.method public setRequest_server_type(Ljava/lang/String;)V
    .locals 0

    .line 132
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->request_server_type:Ljava/lang/String;

    return-void
.end method

.method public setRestart_num(Ljava/lang/String;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->restart_num:Ljava/lang/String;

    return-void
.end method

.method public setScene_id(I)V
    .locals 0

    .line 243
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->scene_id:I

    return-void
.end method

.method public setSource(I)V
    .locals 0

    .line 203
    iput p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->source:I

    return-void
.end method

.method public setTrace(Ljava/lang/String;)V
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/ymnsdk/replugin/event/base/CustEvent;->trace:Ljava/lang/String;

    return-void
.end method
