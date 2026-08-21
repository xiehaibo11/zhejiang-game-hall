.class public Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;
.super Ljava/lang/Object;
.source "YmnGetuiSharedPreferencesUtils.java"


# static fields
.field private static key_cid:Ljava/lang/String; = "ymn_getui_cid"

.field private static key_cid_state:Ljava/lang/String; = "ymn_getui_cid_state"

.field private static key_msg_arrived:Ljava/lang/String; = "ymn_getui_msg_arrived"

.field private static key_msg_click:Ljava/lang/String; = "ymn_getui_msg_click"

.field private static key_pid:Ljava/lang/String; = "ymn_getui_pid"

.field private static key_token:Ljava/lang/String; = "ymn_getui_token"


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getCid()Ljava/lang/String;
    .locals 1

    .line 55
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_cid:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getKeyCidState()Z
    .locals 1

    .line 62
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_cid_state:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->readBool(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static getMsgArrived()Ljava/lang/String;
    .locals 1

    .line 81
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_msg_arrived:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getMsgClick()Ljava/lang/String;
    .locals 1

    .line 75
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_msg_click:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getPid()Ljava/lang/String;
    .locals 1

    .line 48
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_pid:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getToken()Ljava/lang/String;
    .locals 1

    .line 69
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_token:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->read(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    .line 18
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->init(Landroid/content/Context;)V

    return-void
.end method

.method public static put(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 23
    :try_start_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, "misdk"

    const-string p1, "\u5b58\u50a8\u6570\u636e\u7684\u62a5\u5f02\u5e38\u4e86"

    .line 25
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public static put(Ljava/lang/String;Z)V
    .locals 0

    .line 30
    :try_start_0
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string p0, "misdk"

    const-string p1, "\u5b58\u50a8\u6570\u636e\u7684\u62a5\u5f02\u5e38\u4e86"

    .line 32
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public static putCid(Ljava/lang/String;)V
    .locals 1

    .line 52
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_cid:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static putCidState(Z)V
    .locals 1

    .line 59
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_cid_state:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Z)V

    return-void
.end method

.method public static putMsgArrived(Ljava/lang/String;)V
    .locals 1

    .line 78
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_msg_arrived:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static putMsgClick(Ljava/lang/String;)V
    .locals 1

    .line 72
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_msg_click:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static putPid(I)V
    .locals 2

    .line 45
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_pid:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, ""

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static putToken(Ljava/lang/String;)V
    .locals 1

    .line 66
    sget-object v0, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->key_token:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/privategetui/YmnGetuiSharedPreferencesUtils;->put(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static read(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 37
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static readBool(Ljava/lang/String;)Z
    .locals 0

    .line 41
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method
