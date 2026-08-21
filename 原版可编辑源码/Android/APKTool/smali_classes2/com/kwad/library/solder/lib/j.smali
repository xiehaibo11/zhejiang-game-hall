.class public Lcom/kwad/library/solder/lib/j;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/library/solder/lib/a/e;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/library/solder/lib/j$a;
    }
.end annotation


# instance fields
.field private final afJ:Lcom/kwad/library/solder/lib/a/d;

.field private final afK:Lcom/kwad/library/solder/lib/a/g;

.field private final afL:Lcom/kwad/library/solder/lib/a/c;

.field private final afM:Lcom/kwad/library/solder/lib/a/b;

.field private final afN:Lcom/kwad/library/solder/lib/ext/a;

.field private final afy:Lcom/kwad/library/solder/lib/ext/c;


# direct methods
.method public constructor <init>(Lcom/kwad/library/solder/lib/a/d;Lcom/kwad/library/solder/lib/a/g;Lcom/kwad/library/solder/lib/a/c;Lcom/kwad/library/solder/lib/a/b;Lcom/kwad/library/solder/lib/ext/c;Lcom/kwad/library/solder/lib/ext/a;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/library/solder/lib/j;->afJ:Lcom/kwad/library/solder/lib/a/d;

    iput-object p2, p0, Lcom/kwad/library/solder/lib/j;->afK:Lcom/kwad/library/solder/lib/a/g;

    iput-object p3, p0, Lcom/kwad/library/solder/lib/j;->afL:Lcom/kwad/library/solder/lib/a/c;

    iput-object p5, p0, Lcom/kwad/library/solder/lib/j;->afy:Lcom/kwad/library/solder/lib/ext/c;

    iput-object p6, p0, Lcom/kwad/library/solder/lib/j;->afN:Lcom/kwad/library/solder/lib/ext/a;

    iput-object p4, p0, Lcom/kwad/library/solder/lib/j;->afM:Lcom/kwad/library/solder/lib/a/b;

    return-void
.end method

.method protected static c(Ljava/util/Map;)Ljava/util/Map;
    .locals 1

    if-eqz p0, :cond_0

    sget-object v0, Ljava/util/Collections;->EMPTY_MAP:Ljava/util/Map;

    if-ne p0, v0, :cond_1

    :cond_0
    new-instance p0, Ljava/util/HashMap;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    :cond_1
    return-object p0
.end method


# virtual methods
.method public a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/j$a;)Lcom/kwad/library/solder/lib/a/f;
    .locals 2

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wp()Lcom/kwad/library/solder/lib/a/e;

    move-result-object v0

    if-nez v0, :cond_0

    invoke-virtual {p1, p0}, Lcom/kwad/library/solder/lib/a/f;->a(Lcom/kwad/library/solder/lib/a/e;)Lcom/kwad/library/solder/lib/a/f;

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "request id = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ", state log = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/a/f;->wq()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Lcom/kwad/library/solder/lib/j$a;->m(Lcom/kwad/library/solder/lib/a/f;)V

    return-object p1
.end method

.method public wd()Lcom/kwad/library/solder/lib/ext/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/j;->afy:Lcom/kwad/library/solder/lib/ext/c;

    return-object v0
.end method

.method public we()Lcom/kwad/library/solder/lib/a/d;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/j;->afJ:Lcom/kwad/library/solder/lib/a/d;

    return-object v0
.end method

.method public wf()Lcom/kwad/library/solder/lib/a/g;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/j;->afK:Lcom/kwad/library/solder/lib/a/g;

    return-object v0
.end method

.method public wg()Lcom/kwad/library/solder/lib/a/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/j;->afL:Lcom/kwad/library/solder/lib/a/c;

    return-object v0
.end method

.method public wh()Lcom/kwad/library/solder/lib/a/b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/j;->afM:Lcom/kwad/library/solder/lib/a/b;

    return-object v0
.end method

.method public wi()Lcom/kwad/library/solder/lib/ext/a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/j;->afN:Lcom/kwad/library/solder/lib/ext/a;

    return-object v0
.end method
