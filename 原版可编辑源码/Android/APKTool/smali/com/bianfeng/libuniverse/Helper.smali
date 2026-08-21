.class public Lcom/bianfeng/libuniverse/Helper;
.super Ljava/lang/Object;
.source "Helper.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getWritablePath()Ljava/lang/String;
    .locals 1

    .line 9
    invoke-static {}, Lcom/bianfeng/libuniverse/Universe;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static native nativeSetContext(Landroid/content/Context;Landroid/content/res/AssetManager;)V
.end method
