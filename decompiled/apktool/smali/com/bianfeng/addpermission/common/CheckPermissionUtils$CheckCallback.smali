.class public interface abstract Lcom/bianfeng/addpermission/common/CheckPermissionUtils$CheckCallback;
.super Ljava/lang/Object;
.source "CheckPermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/addpermission/common/CheckPermissionUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "CheckCallback"
.end annotation


# virtual methods
.method public abstract onAgree(Ljava/lang/String;)V
.end method

.method public abstract onHasPermission()V
.end method

.method public abstract onRefuse()V
.end method
