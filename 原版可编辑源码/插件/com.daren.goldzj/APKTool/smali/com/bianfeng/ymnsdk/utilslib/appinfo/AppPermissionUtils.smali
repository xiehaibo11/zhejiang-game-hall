.class public Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppPermissionUtils;
.super Ljava/lang/Object;
.source "AppPermissionUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getList(Landroid/content/Context;)Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    const-string p0, ""

    return-object p0
.end method
