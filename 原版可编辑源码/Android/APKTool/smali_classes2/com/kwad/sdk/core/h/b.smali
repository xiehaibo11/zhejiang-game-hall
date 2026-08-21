.class public abstract Lcom/kwad/sdk/core/h/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private KW:Z

.field private KX:Z

.field private ayd:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/h/b;->ayd:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/h/b;->KW:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/h/b;->KX:Z

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 2

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/h/b;->ayd:Z

    iget-boolean v1, p0, Lcom/kwad/sdk/core/h/b;->KX:Z

    if-nez v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/h/b;->af()V

    iput-boolean v0, p0, Lcom/kwad/sdk/core/h/b;->KX:Z

    :cond_0
    return-void
.end method

.method public final aL()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/h/b;->ayd:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/sdk/core/h/b;->KW:Z

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/h/b;->ag()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/h/b;->KW:Z

    :cond_1
    return-void
.end method

.method protected abstract af()V
.end method

.method protected abstract ag()V
.end method
