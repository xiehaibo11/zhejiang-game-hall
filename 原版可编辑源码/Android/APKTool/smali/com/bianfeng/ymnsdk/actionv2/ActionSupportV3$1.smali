.class Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;
.super Ljava/lang/Object;
.source "ActionSupportV3.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->processResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;

.field final synthetic val$result:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;

    .line 204
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;"
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;->this$0:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;->val$result:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 207
    .local p0, "this":Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;, "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;"
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;->this$0:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$1;->val$result:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->access$000(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)V

    .line 208
    return-void
.end method
