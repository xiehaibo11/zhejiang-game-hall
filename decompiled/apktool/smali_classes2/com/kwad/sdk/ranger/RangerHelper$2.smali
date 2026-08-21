.class final Lcom/kwad/sdk/ranger/RangerHelper$2;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/ranger/RangerHelper;->a(Lokhttp3/internal/connection/StreamAllocation;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aGS:Lokhttp3/internal/connection/StreamAllocation;


# direct methods
.method constructor <init>(Lokhttp3/internal/connection/StreamAllocation;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/ranger/RangerHelper$2;->aGS:Lokhttp3/internal/connection/StreamAllocation;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/ranger/RangerHelper$2;->aGS:Lokhttp3/internal/connection/StreamAllocation;

    const-string v1, "call"

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/ranger/RangerHelper;->n(Ljava/lang/Object;)V

    return-void
.end method
