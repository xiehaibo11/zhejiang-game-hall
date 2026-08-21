.class Lcom/sigmob/sdk/base/common/w$1;
.super Ljava/lang/Thread;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/w;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/w;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/w;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/w$1;->a:Lcom/sigmob/sdk/base/common/w;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/w$1;->a:Lcom/sigmob/sdk/base/common/w;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/w;->a(Lcom/sigmob/sdk/base/common/w;)V

    return-void
.end method
