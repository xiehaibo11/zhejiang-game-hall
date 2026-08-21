.class Lcom/bianfeng/yidonglogin/YidongLoginInterface$6;
.super Ljava/lang/Object;
.source "YidongLoginInterface.java"

# interfaces
.implements Lcom/cmic/gen/sdk/view/GenBackPressedListener;


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

    .line 204
    iput-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$6;->this$0:Lcom/bianfeng/yidonglogin/YidongLoginInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onBackPressed()V
    .locals 1

    const-string v0, "YidongLoginInterface  onBackPressed----\u8fd4\u56de\u952e\u56de\u8c03>"

    .line 207
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void
.end method
