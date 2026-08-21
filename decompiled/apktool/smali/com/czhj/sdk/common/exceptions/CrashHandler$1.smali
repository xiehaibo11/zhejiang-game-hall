.class Lcom/czhj/sdk/common/exceptions/CrashHandler$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/exceptions/CrashHandler;->handleException(Ljava/lang/Throwable;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/czhj/sdk/common/exceptions/CrashHandler;

.field final synthetic val$exc:Ljava/lang/Throwable;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/exceptions/CrashHandler;Ljava/lang/Throwable;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler$1;->this$0:Lcom/czhj/sdk/common/exceptions/CrashHandler;

    iput-object p2, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler$1;->val$exc:Ljava/lang/Throwable;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler$1;->this$0:Lcom/czhj/sdk/common/exceptions/CrashHandler;

    iget-object v1, p0, Lcom/czhj/sdk/common/exceptions/CrashHandler$1;->val$exc:Ljava/lang/Throwable;

    invoke-static {v0, v1}, Lcom/czhj/sdk/common/exceptions/CrashHandler;->access$000(Lcom/czhj/sdk/common/exceptions/CrashHandler;Ljava/lang/Throwable;)V

    return-void
.end method
