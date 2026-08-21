.class public interface abstract Lcom/alipay/sdk/OnPayListener;
.super Ljava/lang/Object;
.source "OnPayListener.java"


# static fields
.field public static final CODE_SYSTEM_ERROR:I = 0x96

.field public static final CODE_USER_CACEL_PAY:I = 0x1771


# virtual methods
.method public abstract onFailure(ILjava/lang/String;)V
.end method

.method public abstract onSuccess(Ljava/lang/String;)V
.end method
