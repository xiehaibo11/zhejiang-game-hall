.class Lcom/bianfeng/yidonglogin/YidongLoginInterface$5;
.super Ljava/lang/Object;
.source "YidongLoginInterface.java"

# interfaces
.implements Lcom/cmic/gen/sdk/view/GenLoginClickListener;


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

    .line 210
    iput-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$5;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLoginClickComplete(Landroid/content/Context;Lorg/json/JSONObject;)V
    .locals 1

    .line 221
    invoke-static {}, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->dismiss()V

    if-eqz p2, :cond_0

    .line 223
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "YidongLoginInterface  onLoginClickComplete---->"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method public onLoginClickStart(Landroid/content/Context;Lorg/json/JSONObject;)V
    .locals 1

    .line 213
    invoke-static {p1}, Lcom/bianfeng/yidonglogin/utils/LoadingDialogUtils;->show(Landroid/content/Context;)V

    if-eqz p2, :cond_0

    .line 215
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "YidongLoginInterface  onLoginClickStart---->"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :cond_0
    return-void
.end method
