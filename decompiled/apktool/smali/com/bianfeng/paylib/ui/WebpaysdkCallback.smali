.class public interface abstract Lcom/bianfeng/paylib/ui/WebpaysdkCallback;
.super Ljava/lang/Object;
.source "WebpaysdkCallback.java"


# static fields
.field public static final ALIPAYTYPE:Ljava/lang/String; = "aliPay"

.field public static final WXPAYTYPE:Ljava/lang/String; = "wx"


# virtual methods
.method public abstract buyNext(Ljava/lang/String;)V
.end method

.method public abstract onCancel()V
.end method

.method public abstract onPayFail(Ljava/lang/String;)V
.end method

.method public abstract onPaySuccess()V
.end method
