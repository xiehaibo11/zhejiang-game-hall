.class public abstract Lcom/kwad/library/solder/lib/j$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/library/solder/lib/j;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x409
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/library/solder/lib/j$a$a;,
        Lcom/kwad/library/solder/lib/j$a$b;,
        Lcom/kwad/library/solder/lib/j$a$c;
    }
.end annotation


# instance fields
.field final afO:Lcom/kwad/library/solder/lib/a/e;


# direct methods
.method public constructor <init>(Lcom/kwad/library/solder/lib/a/e;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/library/solder/lib/j$a;->afO:Lcom/kwad/library/solder/lib/a/e;

    return-void
.end method

.method public static a(Lcom/kwad/library/solder/lib/a/e;I)Lcom/kwad/library/solder/lib/j$a;
    .locals 1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_1

    const/16 v0, 0x100

    if-eq p1, v0, :cond_0

    new-instance p1, Lcom/kwad/library/solder/lib/j$a$b;

    invoke-direct {p1, p0}, Lcom/kwad/library/solder/lib/j$a$b;-><init>(Lcom/kwad/library/solder/lib/a/e;)V

    goto :goto_0

    :cond_0
    new-instance p1, Lcom/kwad/library/solder/lib/j$a$a;

    invoke-direct {p1, p0}, Lcom/kwad/library/solder/lib/j$a$a;-><init>(Lcom/kwad/library/solder/lib/a/e;)V

    goto :goto_0

    :cond_1
    new-instance p1, Lcom/kwad/library/solder/lib/j$a$c;

    invoke-direct {p1, p0}, Lcom/kwad/library/solder/lib/j$a$c;-><init>(Lcom/kwad/library/solder/lib/a/e;)V

    :goto_0
    return-object p1
.end method


# virtual methods
.method public abstract m(Lcom/kwad/library/solder/lib/a/f;)V
.end method
