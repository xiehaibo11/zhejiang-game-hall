.class Lcom/bianfeng/yidonglogin/YidongLoginInterface$3;
.super Ljava/lang/Object;
.source "YidongLoginInterface.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/yidonglogin/YidongLoginInterface;->initSdk()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)V
    .locals 0

    .line 178
    iput-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$3;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 181
    iget-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$3;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-static {p1}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->access$100(Lcom/bianfeng/yidonglogin/YidongLoginInterface;)Lcom/cmic/gen/sdk/auth/GenAuthnHelper;

    move-result-object p1

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/auth/GenAuthnHelper;->quitAuthActivity()V

    return-void
.end method
