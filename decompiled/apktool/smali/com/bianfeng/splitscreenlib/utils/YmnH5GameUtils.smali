.class public Lcom/bianfeng/splitscreenlib/utils/YmnH5GameUtils;
.super Ljava/lang/Object;
.source "YmnH5GameUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkOnCreat(Landroid/app/Activity;)V
    .locals 1

    if-nez p0, :cond_0

    const-string p0, "ymnsdk: "

    const-string v0, "\u6ca1\u6709\u8c03onCreat\u65b9\u6cd5"

    .line 13
    invoke-static {p0, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method
