.class public Lcom/bianfeng/datafun/Datafun;
.super Ljava/lang/Object;
.source "Datafun.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getDeviceId(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    .line 1
    invoke-static {}, Lcom/bianfeng/ymnsdk/ymndatalib/utils/YmndataDeviceInfo;->getDeviceId()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
