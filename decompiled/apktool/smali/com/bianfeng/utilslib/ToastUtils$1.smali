.class Lcom/bianfeng/utilslib/ToastUtils$1;
.super Ljava/lang/Object;
.source "ToastUtils.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/utilslib/ToastUtils;->show(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/utilslib/ToastUtils;


# direct methods
.method constructor <init>(Lcom/bianfeng/utilslib/ToastUtils;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/bianfeng/utilslib/ToastUtils$1;->this$0:Lcom/bianfeng/utilslib/ToastUtils;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 59
    iget-object v0, p0, Lcom/bianfeng/utilslib/ToastUtils$1;->this$0:Lcom/bianfeng/utilslib/ToastUtils;

    invoke-static {v0}, Lcom/bianfeng/utilslib/ToastUtils;->access$000(Lcom/bianfeng/utilslib/ToastUtils;)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return-void
.end method
