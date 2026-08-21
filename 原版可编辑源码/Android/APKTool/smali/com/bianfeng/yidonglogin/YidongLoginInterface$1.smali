.class Lcom/bianfeng/yidonglogin/YidongLoginInterface$1;
.super Ljava/lang/Object;
.source "YidongLoginInterface.java"

# interfaces
.implements Lcom/cmic/gen/sdk/view/GenLoginPageInListener;


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

    .line 134
    iput-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$1;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onLoginPageInComplete(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 0

    const-string p2, "200087"

    .line 137
    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, " YidongLoginInterface initSDK page in---------------"

    .line 138
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :cond_0
    return-void
.end method
