.class public final Lcom/tkay/core/common/k/e;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/tkay/core/common/f/d;IILjava/lang/String;Ljava/lang/String;ILjava/lang/Boolean;Ljava/lang/String;ZZZZ)V
    .locals 3

    .line 24
    new-instance v0, Lcom/tkay/core/common/f/g;

    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/f/g;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "1004684"

    .line 25
    iput-object v1, v0, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    .line 26
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->b:Ljava/lang/String;

    .line 27
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->d:Ljava/lang/String;

    .line 28
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->k:Ljava/lang/String;

    .line 29
    invoke-static {p5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p5

    iput-object p5, v0, Lcom/tkay/core/common/f/g;->m:Ljava/lang/String;

    .line 30
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/tkay/core/common/f/g;->n:Ljava/lang/String;

    const-string p0, "1"

    const-string p5, "2"

    if-eqz p8, :cond_0

    move-object p8, p0

    goto :goto_0

    :cond_0
    move-object p8, p5

    .line 31
    :goto_0
    iput-object p8, v0, Lcom/tkay/core/common/f/g;->o:Ljava/lang/String;

    .line 33
    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    iput-object p2, v0, Lcom/tkay/core/common/f/g;->p:Ljava/lang/String;

    .line 35
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 36
    iput-object p3, v0, Lcom/tkay/core/common/f/g;->q:Ljava/lang/String;

    .line 38
    :cond_1
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 39
    iput-object p4, v0, Lcom/tkay/core/common/f/g;->r:Ljava/lang/String;

    :cond_2
    if-nez p6, :cond_3

    const-string p2, "0"

    goto :goto_1

    .line 45
    :cond_3
    invoke-virtual {p6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p2

    if-eqz p2, :cond_4

    move-object p2, p0

    goto :goto_1

    :cond_4
    move-object p2, p5

    :goto_1
    iput-object p2, v0, Lcom/tkay/core/common/f/g;->s:Ljava/lang/String;

    .line 48
    iput-object p7, v0, Lcom/tkay/core/common/f/g;->t:Ljava/lang/String;

    if-eqz p9, :cond_5

    move-object p2, p0

    goto :goto_2

    :cond_5
    move-object p2, p5

    .line 50
    :goto_2
    iput-object p2, v0, Lcom/tkay/core/common/f/g;->u:Ljava/lang/String;

    if-eqz p10, :cond_6

    move-object p2, p0

    goto :goto_3

    :cond_6
    move-object p2, p5

    .line 51
    :goto_3
    iput-object p2, v0, Lcom/tkay/core/common/f/g;->v:Ljava/lang/String;

    .line 52
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/tkay/core/common/f/g;->w:Ljava/lang/String;

    if-eqz p11, :cond_7

    goto :goto_4

    :cond_7
    move-object p0, p5

    .line 53
    :goto_4
    iput-object p0, v0, Lcom/tkay/core/common/f/g;->x:Ljava/lang/String;

    .line 56
    invoke-static {v0}, Lcom/tkay/core/common/k/c;->b(Lcom/tkay/core/common/f/g;)V

    return-void
.end method
