.class public final Lcom/tkay/basead/d/c$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/d/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field protected a:I

.field protected b:I

.field protected c:I

.field protected d:Ljava/lang/String;

.field protected e:I

.field protected f:I

.field protected g:I

.field protected h:I

.field protected i:I

.field protected j:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private h(I)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 76
    iput p1, p0, Lcom/tkay/basead/d/c$a;->h:I

    return-object p0
.end method


# virtual methods
.method public final a(I)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 41
    iput p1, p0, Lcom/tkay/basead/d/c$a;->a:I

    return-object p0
.end method

.method public final a(Ljava/lang/String;)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 36
    iput-object p1, p0, Lcom/tkay/basead/d/c$a;->j:Ljava/lang/String;

    return-object p0
.end method

.method public final a()Lcom/tkay/basead/d/c;
    .locals 2

    .line 86
    new-instance v0, Lcom/tkay/basead/d/c;

    invoke-direct {v0}, Lcom/tkay/basead/d/c;-><init>()V

    .line 87
    iget v1, p0, Lcom/tkay/basead/d/c$a;->a:I

    iput v1, v0, Lcom/tkay/basead/d/c;->a:I

    .line 88
    iget v1, p0, Lcom/tkay/basead/d/c$a;->b:I

    iput v1, v0, Lcom/tkay/basead/d/c;->b:I

    .line 89
    iget v1, p0, Lcom/tkay/basead/d/c$a;->c:I

    iput v1, v0, Lcom/tkay/basead/d/c;->c:I

    .line 90
    iget-object v1, p0, Lcom/tkay/basead/d/c$a;->d:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/basead/d/c;->d:Ljava/lang/String;

    .line 91
    iget v1, p0, Lcom/tkay/basead/d/c$a;->e:I

    iput v1, v0, Lcom/tkay/basead/d/c;->e:I

    .line 92
    iget v1, p0, Lcom/tkay/basead/d/c$a;->f:I

    iput v1, v0, Lcom/tkay/basead/d/c;->f:I

    .line 93
    iget v1, p0, Lcom/tkay/basead/d/c$a;->g:I

    iput v1, v0, Lcom/tkay/basead/d/c;->g:I

    .line 94
    iget v1, p0, Lcom/tkay/basead/d/c$a;->i:I

    iput v1, v0, Lcom/tkay/basead/d/c;->i:I

    .line 95
    iget v1, p0, Lcom/tkay/basead/d/c$a;->h:I

    iput v1, v0, Lcom/tkay/basead/d/c;->h:I

    .line 96
    iget-object v1, p0, Lcom/tkay/basead/d/c$a;->j:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/basead/d/c;->a(Lcom/tkay/basead/d/c;Ljava/lang/String;)Ljava/lang/String;

    return-object v0
.end method

.method public final b(I)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 46
    iput p1, p0, Lcom/tkay/basead/d/c$a;->b:I

    return-object p0
.end method

.method public final b(Ljava/lang/String;)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/tkay/basead/d/c$a;->d:Ljava/lang/String;

    return-object p0
.end method

.method public final c(I)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 51
    iput p1, p0, Lcom/tkay/basead/d/c$a;->c:I

    return-object p0
.end method

.method public final d(I)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 61
    iput p1, p0, Lcom/tkay/basead/d/c$a;->e:I

    return-object p0
.end method

.method public final e(I)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 66
    iput p1, p0, Lcom/tkay/basead/d/c$a;->f:I

    return-object p0
.end method

.method public final f(I)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 71
    iput p1, p0, Lcom/tkay/basead/d/c$a;->g:I

    return-object p0
.end method

.method public final g(I)Lcom/tkay/basead/d/c$a;
    .locals 0

    .line 81
    iput p1, p0, Lcom/tkay/basead/d/c$a;->i:I

    return-object p0
.end method
