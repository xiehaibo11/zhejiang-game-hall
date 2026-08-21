.class Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$1;
.super Ljava/lang/Object;
.source "ActionSupportV2.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->processResponseResult(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;

.field final synthetic val$result:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$1;->this$0:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$1;->val$result:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$1;->this$0:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$1;->val$result:Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;->access$000(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2;Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV2$ResponseResult;)V

    return-void
.end method
