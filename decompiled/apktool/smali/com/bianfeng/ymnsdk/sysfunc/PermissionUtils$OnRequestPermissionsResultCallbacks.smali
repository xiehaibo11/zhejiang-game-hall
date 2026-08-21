.class public interface abstract Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils$OnRequestPermissionsResultCallbacks;
.super Ljava/lang/Object;
.source "PermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/PermissionUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "OnRequestPermissionsResultCallbacks"
.end annotation


# virtual methods
.method public abstract onPermissionsDenied(ILjava/util/List;Z)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;Z)V"
        }
    .end annotation
.end method

.method public abstract onPermissionsGranted(ILjava/util/List;Z)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;Z)V"
        }
    .end annotation
.end method
