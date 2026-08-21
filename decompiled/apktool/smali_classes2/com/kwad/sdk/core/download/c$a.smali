.class final Lcom/kwad/sdk/core/download/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/download/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "a"
.end annotation


# static fields
.field static final anR:Lcom/kwad/sdk/core/download/c;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/download/c;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/download/c;-><init>(B)V

    sput-object v0, Lcom/kwad/sdk/core/download/c$a;->anR:Lcom/kwad/sdk/core/download/c;

    return-void
.end method
