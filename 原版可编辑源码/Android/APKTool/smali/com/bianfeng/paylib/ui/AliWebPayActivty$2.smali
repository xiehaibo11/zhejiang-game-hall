.class Lcom/bianfeng/paylib/ui/AliWebPayActivty$2;
.super Ljava/lang/Object;
.source "AliWebPayActivty.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/paylib/ui/AliWebPayActivty;->initData()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;


# direct methods
.method constructor <init>(Lcom/bianfeng/paylib/ui/AliWebPayActivty;)V
    .locals 0

    .line 124
    iput-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$2;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 1

    .line 127
    invoke-static {}, Lcom/bianfeng/utilslib/Logger;->getInstance()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string p2, "closePayResultWindow"

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/Logger;->e(Ljava/lang/String;)I

    .line 128
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getLoginCallback()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0, p2}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->onCallWithHashmap(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    .line 129
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$2;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->finish()V

    return-void
.end method
