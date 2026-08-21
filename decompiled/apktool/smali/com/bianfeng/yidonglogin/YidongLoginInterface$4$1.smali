.class Lcom/bianfeng/yidonglogin/YidongLoginInterface$4$1;
.super Ljava/lang/Object;
.source "YidongLoginInterface.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;->onLoginClick(Landroid/content/Context;Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;

.field final synthetic val$context:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;Landroid/content/Context;)V
    .locals 0

    .line 231
    iput-object p1, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4$1;->this$1:Lcom/bianfeng/yidonglogin/YidongLoginInterface$4;

    iput-object p2, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4$1;->val$context:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 234
    iget-object v0, p0, Lcom/bianfeng/yidonglogin/YidongLoginInterface$4$1;->val$context:Landroid/content/Context;

    const-string v1, "\u672a\u540c\u610f\u9690\u79c1"

    const/4 v2, 0x1

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return-void
.end method
