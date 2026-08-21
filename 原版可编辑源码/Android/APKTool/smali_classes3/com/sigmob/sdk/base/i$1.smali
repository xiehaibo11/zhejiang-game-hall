.class Lcom/sigmob/sdk/base/i$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/i;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/i;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/i;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/i$1;->a:Lcom/sigmob/sdk/base/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/i$1;->a:Lcom/sigmob/sdk/base/i;

    invoke-static {v0}, Lcom/sigmob/sdk/base/i;->a(Lcom/sigmob/sdk/base/i;)V

    return-void
.end method
