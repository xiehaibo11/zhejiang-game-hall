.class Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;
.super Ljava/lang/Object;
.source "YidongLoginInterface.java"

# interfaces
.implements Lcom/cmic/gen/sdk/view/GenCheckBoxListener;


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

    .line 228
    iput-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLoginClick(Landroid/content/Context;Lorg/json/JSONObject;)V
    .locals 1

    .line 231
    iget-object p2, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    new-instance v0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4$1;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4$1;-><init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;Landroid/content/Context;)V

    invoke-virtual {p2, v0}, Lcom/bianfeng/yidonglogin/YidongLoginInterface;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    return-void
.end method
