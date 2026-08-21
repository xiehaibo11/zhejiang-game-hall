.class public final Lcom/tkay/expressad/a/a/b;
.super Ljava/lang/Object;


# static fields
.field public static a:I = 0x0

.field public static b:I = 0x1


# instance fields
.field private c:Ljava/lang/String;

.field private d:I

.field private e:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private f:J

.field private g:Lcom/tkay/expressad/foundation/d/c;

.field private h:Ljava/lang/String;

.field private i:I

.field private j:Z

.field private k:Z

.field private l:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 59
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 12
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/a/a/b;->e:Ljava/util/HashSet;

    .line 60
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/a/a/b;->f:J

    .line 61
    iput-object p1, p0, Lcom/tkay/expressad/a/a/b;->c:Ljava/lang/String;

    .line 62
    invoke-virtual {p0, p2}, Lcom/tkay/expressad/a/a/b;->b(Ljava/lang/String;)V

    return-void
.end method

.method private i()Ljava/lang/String;
    .locals 1

    .line 82
    iget-object v0, p0, Lcom/tkay/expressad/a/a/b;->c:Ljava/lang/String;

    return-object v0
.end method

.method private j()Ljava/util/HashSet;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 91
    iget-object v0, p0, Lcom/tkay/expressad/a/a/b;->e:Ljava/util/HashSet;

    return-object v0
.end method


# virtual methods
.method public final a(I)V
    .locals 0

    .line 48
    iput p1, p0, Lcom/tkay/expressad/a/a/b;->l:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/tkay/expressad/a/a/b;->g:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 70
    iput-object p1, p0, Lcom/tkay/expressad/a/a/b;->h:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 27
    iput-boolean p1, p0, Lcom/tkay/expressad/a/a/b;->j:Z

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 23
    iget-boolean v0, p0, Lcom/tkay/expressad/a/a/b;->j:Z

    return v0
.end method

.method public final b(I)V
    .locals 0

    .line 56
    iput p1, p0, Lcom/tkay/expressad/a/a/b;->i:I

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 95
    iget v0, p0, Lcom/tkay/expressad/a/a/b;->d:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/tkay/expressad/a/a/b;->d:I

    .line 96
    iget-object v0, p0, Lcom/tkay/expressad/a/a/b;->e:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 35
    iput-boolean p1, p0, Lcom/tkay/expressad/a/a/b;->k:Z

    return-void
.end method

.method public final b()Z
    .locals 1

    .line 31
    iget-boolean v0, p0, Lcom/tkay/expressad/a/a/b;->k:Z

    return v0
.end method

.method public final c()I
    .locals 1

    .line 44
    iget v0, p0, Lcom/tkay/expressad/a/a/b;->l:I

    return v0
.end method

.method public final d()I
    .locals 1

    .line 52
    iget v0, p0, Lcom/tkay/expressad/a/a/b;->i:I

    return v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 66
    iget-object v0, p0, Lcom/tkay/expressad/a/a/b;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final f()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/tkay/expressad/a/a/b;->g:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method public final g()I
    .locals 1

    .line 86
    iget v0, p0, Lcom/tkay/expressad/a/a/b;->d:I

    return v0
.end method

.method public final h()J
    .locals 2

    .line 100
    iget-wide v0, p0, Lcom/tkay/expressad/a/a/b;->f:J

    return-wide v0
.end method
