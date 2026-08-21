.class public Lcom/kwad/library/solder/lib/b/b;
.super Lcom/kwad/library/solder/lib/a/f;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<P:",
        "Lcom/kwad/library/solder/lib/g;",
        ">",
        "Lcom/kwad/library/solder/lib/a/f<",
        "TP;>;"
    }
.end annotation


# direct methods
.method public constructor <init>(Lcom/kwad/library/solder/lib/c/b;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/library/solder/lib/a/f;-><init>(Lcom/kwad/library/solder/lib/c/b;)V

    return-void
.end method


# virtual methods
.method public synthetic bL(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/library/solder/lib/b/b;->bO(Ljava/lang/String;)Lcom/kwad/library/solder/lib/g;

    move-result-object p1

    return-object p1
.end method

.method public bO(Ljava/lang/String;)Lcom/kwad/library/solder/lib/g;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")TP;"
        }
    .end annotation

    new-instance v0, Lcom/kwad/library/solder/lib/g;

    invoke-direct {v0, p1}, Lcom/kwad/library/solder/lib/g;-><init>(Ljava/lang/String;)V

    return-object v0
.end method
