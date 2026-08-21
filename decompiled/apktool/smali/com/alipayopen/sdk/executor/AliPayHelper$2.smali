.class Lcom/alipayopen/sdk/executor/AliPayHelper$2;
.super Ljava/lang/Object;
.source "AliPayHelper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/alipayopen/sdk/executor/AliPayHelper;->start(Ljava/lang/String;Lcom/alipayopen/sdk/OnPayListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/alipayopen/sdk/executor/AliPayHelper;

.field final synthetic val$orderInfo:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/alipayopen/sdk/executor/AliPayHelper;Ljava/lang/String;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/alipayopen/sdk/executor/AliPayHelper$2;->this$0:Lcom/alipayopen/sdk/executor/AliPayHelper;

    iput-object p2, p0, Lcom/alipayopen/sdk/executor/AliPayHelper$2;->val$orderInfo:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 80
    iget-object v0, p0, Lcom/alipayopen/sdk/executor/AliPayHelper$2;->this$0:Lcom/alipayopen/sdk/executor/AliPayHelper;

    iget-object v1, p0, Lcom/alipayopen/sdk/executor/AliPayHelper$2;->val$orderInfo:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/alipayopen/sdk/executor/AliPayHelper;->access$000(Lcom/alipayopen/sdk/executor/AliPayHelper;Ljava/lang/String;)Z

    return-void
.end method
