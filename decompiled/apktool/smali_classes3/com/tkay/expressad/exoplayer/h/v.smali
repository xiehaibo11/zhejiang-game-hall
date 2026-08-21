.class public final Lcom/tkay/expressad/exoplayer/h/v;
.super Lcom/tkay/expressad/exoplayer/h/f;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/h/v$a;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/exoplayer/h/f<",
        "Ljava/lang/Integer;",
        ">;"
    }
.end annotation


# static fields
.field private static final a:I = -0x1


# instance fields
.field private final b:[Lcom/tkay/expressad/exoplayer/h/s;

.field private final c:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/tkay/expressad/exoplayer/h/s;",
            ">;"
        }
    .end annotation
.end field

.field private final d:Lcom/tkay/expressad/exoplayer/h/h;

.field private e:Lcom/tkay/expressad/exoplayer/ae;

.field private f:Ljava/lang/Object;

.field private g:I

.field private h:Lcom/tkay/expressad/exoplayer/h/v$a;


# direct methods
.method private varargs constructor <init>(Lcom/tkay/expressad/exoplayer/h/h;[Lcom/tkay/expressad/exoplayer/h/s;)V
    .locals 0

    .line 94
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/h/f;-><init>()V

    .line 95
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    .line 96
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->d:Lcom/tkay/expressad/exoplayer/h/h;

    .line 97
    new-instance p1, Ljava/util/ArrayList;

    invoke-static {p2}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->c:Ljava/util/ArrayList;

    const/4 p1, -0x1

    .line 98
    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    return-void
.end method

.method private varargs constructor <init>([Lcom/tkay/expressad/exoplayer/h/s;)V
    .locals 1

    .line 84
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/j;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/h/j;-><init>()V

    invoke-direct {p0, v0, p1}, Lcom/tkay/expressad/exoplayer/h/v;-><init>(Lcom/tkay/expressad/exoplayer/h/h;[Lcom/tkay/expressad/exoplayer/h/s;)V

    return-void
.end method

.method private a(Lcom/tkay/expressad/exoplayer/ae;)Lcom/tkay/expressad/exoplayer/h/v$a;
    .locals 2

    .line 165
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    .line 166
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    goto :goto_0

    .line 167
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result p1

    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    if-eq p1, v0, :cond_1

    .line 168
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/v$a;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/h/v$a;-><init>()V

    return-object p1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private a(Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 2

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->h:Lcom/tkay/expressad/exoplayer/h/v$a;

    if-nez v0, :cond_2

    .line 1165
    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    .line 1166
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    goto :goto_0

    .line 1167
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result v0

    iget v1, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    if-eq v0, v1, :cond_1

    .line 1168
    new-instance v0, Lcom/tkay/expressad/exoplayer/h/v$a;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/h/v$a;-><init>()V

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x0

    .line 149
    :goto_1
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->h:Lcom/tkay/expressad/exoplayer/h/v$a;

    .line 151
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->h:Lcom/tkay/expressad/exoplayer/h/v$a;

    if-eqz v0, :cond_3

    return-void

    .line 154
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->c:Ljava/util/ArrayList;

    invoke-virtual {v0, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 155
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    const/4 v1, 0x0

    aget-object v0, v0, v1

    if-ne p1, v0, :cond_4

    .line 156
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/h/v;->e:Lcom/tkay/expressad/exoplayer/ae;

    .line 157
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/v;->f:Ljava/lang/Object;

    .line 159
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->c:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_5

    .line 160
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/v;->f:Ljava/lang/Object;

    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/v;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    :cond_5
    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;
    .locals 4

    .line 119
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    array-length v0, v0

    new-array v1, v0, [Lcom/tkay/expressad/exoplayer/h/r;

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_0

    .line 121
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    aget-object v3, v3, v2

    invoke-interface {v3, p1, p2}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/s$a;Lcom/tkay/expressad/exoplayer/j/b;)Lcom/tkay/expressad/exoplayer/h/r;

    move-result-object v3

    aput-object v3, v1, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 123
    :cond_0
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/u;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/v;->d:Lcom/tkay/expressad/exoplayer/h/h;

    invoke-direct {p1, p2, v1}, Lcom/tkay/expressad/exoplayer/h/u;-><init>(Lcom/tkay/expressad/exoplayer/h/h;[Lcom/tkay/expressad/exoplayer/h/r;)V

    return-object p1
.end method

.method public final a()V
    .locals 2

    .line 136
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/h/f;->a()V

    const/4 v0, 0x0

    .line 137
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->e:Lcom/tkay/expressad/exoplayer/ae;

    .line 138
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->f:Ljava/lang/Object;

    const/4 v1, -0x1

    .line 139
    iput v1, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    .line 140
    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->h:Lcom/tkay/expressad/exoplayer/h/v$a;

    .line 141
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->c:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 142
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->c:Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    invoke-static {v0, v1}, Ljava/util/Collections;->addAll(Ljava/util/Collection;[Ljava/lang/Object;)Z

    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h/r;)V
    .locals 3

    .line 128
    check-cast p1, Lcom/tkay/expressad/exoplayer/h/u;

    const/4 v0, 0x0

    .line 129
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    array-length v2, v1

    if-ge v0, v2, :cond_0

    .line 130
    aget-object v1, v1, v0

    iget-object v2, p1, Lcom/tkay/expressad/exoplayer/h/u;->a:[Lcom/tkay/expressad/exoplayer/h/r;

    aget-object v2, v2, v0

    invoke-interface {v1, v2}, Lcom/tkay/expressad/exoplayer/h/s;->a(Lcom/tkay/expressad/exoplayer/h/r;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/h;Z)V
    .locals 1

    .line 103
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/f;->a(Lcom/tkay/expressad/exoplayer/h;Z)V

    const/4 p1, 0x0

    .line 104
    :goto_0
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    array-length p2, p2

    if-ge p1, p2, :cond_0

    .line 105
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    aget-object v0, v0, p1

    invoke-virtual {p0, p2, v0}, Lcom/tkay/expressad/exoplayer/h/v;->a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;)V

    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method protected final synthetic a(Ljava/lang/Object;Lcom/tkay/expressad/exoplayer/h/s;Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V
    .locals 1

    .line 2148
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->h:Lcom/tkay/expressad/exoplayer/h/v$a;

    if-nez p1, :cond_2

    .line 2165
    iget p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    const/4 v0, -0x1

    if-ne p1, v0, :cond_0

    .line 2166
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    goto :goto_0

    .line 2167
    :cond_0
    invoke-virtual {p3}, Lcom/tkay/expressad/exoplayer/ae;->c()I

    move-result p1

    iget v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->g:I

    if-eq p1, v0, :cond_1

    .line 2168
    new-instance p1, Lcom/tkay/expressad/exoplayer/h/v$a;

    invoke-direct {p1}, Lcom/tkay/expressad/exoplayer/h/v$a;-><init>()V

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p1, 0x0

    .line 2149
    :goto_1
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->h:Lcom/tkay/expressad/exoplayer/h/v$a;

    .line 2151
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->h:Lcom/tkay/expressad/exoplayer/h/v$a;

    if-nez p1, :cond_4

    .line 2154
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->c:Ljava/util/ArrayList;

    invoke-virtual {p1, p2}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 2155
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->b:[Lcom/tkay/expressad/exoplayer/h/s;

    const/4 v0, 0x0

    aget-object p1, p1, v0

    if-ne p2, p1, :cond_3

    .line 2156
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/h/v;->e:Lcom/tkay/expressad/exoplayer/ae;

    .line 2157
    iput-object p4, p0, Lcom/tkay/expressad/exoplayer/h/v;->f:Ljava/lang/Object;

    .line 2159
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->c:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->isEmpty()Z

    move-result p1

    if-eqz p1, :cond_4

    .line 2160
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/h/v;->e:Lcom/tkay/expressad/exoplayer/ae;

    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/h/v;->f:Ljava/lang/Object;

    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/h/v;->a(Lcom/tkay/expressad/exoplayer/ae;Ljava/lang/Object;)V

    :cond_4
    return-void
.end method

.method public final b()V
    .locals 1

    .line 111
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/h/v;->h:Lcom/tkay/expressad/exoplayer/h/v$a;

    if-nez v0, :cond_0

    .line 114
    invoke-super {p0}, Lcom/tkay/expressad/exoplayer/h/f;->b()V

    return-void

    .line 112
    :cond_0
    throw v0
.end method
