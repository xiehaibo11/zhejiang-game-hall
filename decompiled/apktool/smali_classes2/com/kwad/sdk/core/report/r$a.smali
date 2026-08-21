.class public final Lcom/kwad/sdk/core/report/r$a;
.super Lcom/kwad/sdk/core/response/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/report/r;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "a"
.end annotation


# instance fields
.field public asy:I

.field public asz:I


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    return-void
.end method

.method public static Cg()Lcom/kwad/sdk/core/report/r$a;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/report/r$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/r$a;-><init>()V

    sget v1, Lcom/kwad/sdk/core/report/r$b;->asy:I

    iput v1, v0, Lcom/kwad/sdk/core/report/r$a;->asy:I

    sget v1, Lcom/kwad/sdk/core/report/r$b;->asz:I

    iput v1, v0, Lcom/kwad/sdk/core/report/r$a;->asz:I

    return-object v0
.end method
