.class public interface abstract Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;
.super Ljava/lang/Object;
.source "BfDataPermissionUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x609
    name = "PermissCallback"
.end annotation


# virtual methods
.method public abstract onAllow(ILjava/lang/String;)V
.end method

.method public abstract onAllowAll(I)V
.end method

.method public abstract onDeny(ILjava/lang/String;)V
.end method

.method public abstract onDenyIn48Hours(ILjava/lang/String;)V
.end method
