.class Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;
.super Ljava/lang/Object;
.source "ActionAttachment.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->onStart(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;Landroid/content/Context;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;->b:Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;->a:Landroid/content/Context;

    check-cast v0, Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;->b:Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a$a;->a:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/action/ActionAttachment$a;->a(Landroid/content/Context;)V

    :cond_0
    return-void
.end method
