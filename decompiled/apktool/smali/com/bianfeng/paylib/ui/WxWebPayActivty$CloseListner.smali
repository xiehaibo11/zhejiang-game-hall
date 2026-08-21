.class Lcom/bianfeng/paylib/ui/WxWebPayActivty$CloseListner;
.super Ljava/lang/Object;
.source "WxWebPayActivty.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/paylib/ui/WxWebPayActivty;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "CloseListner"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;


# direct methods
.method private constructor <init>(Lcom/bianfeng/paylib/ui/WxWebPayActivty;)V
    .locals 0

    .line 184
    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty$CloseListner;->this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/bianfeng/paylib/ui/WxWebPayActivty;Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;)V
    .locals 0

    .line 184
    invoke-direct {p0, p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty$CloseListner;-><init>(Lcom/bianfeng/paylib/ui/WxWebPayActivty;)V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 188
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty$CloseListner;->this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->finish()V

    return-void
.end method
