.class abstract Lcom/kwad/sdk/api/loader/m$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/loader/m$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/api/loader/m;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x408
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/api/loader/m$c<",
        "TT;>;"
    }
.end annotation


# instance fields
.field aiO:Lcom/kwad/sdk/api/loader/m$c;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/kwad/sdk/api/loader/m$c<",
            "TT;>;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Lcom/kwad/sdk/api/loader/m$c;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/api/loader/m$c<",
            "TT;>;)V"
        }
    .end annotation

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/api/loader/m$a;->aiO:Lcom/kwad/sdk/api/loader/m$c;

    return-void
.end method
