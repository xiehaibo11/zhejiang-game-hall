.class public final Lcom/tkay/expressad/exoplayer/e/i;
.super Ljava/lang/Object;


# static fields
.field public static final a:Lcom/tkay/expressad/exoplayer/g/b/g$a;

.field private static final d:Ljava/lang/String; = "com.apple.iTunes"

.field private static final e:Ljava/lang/String; = "iTunSMPB"

.field private static final f:Ljava/util/regex/Pattern;


# instance fields
.field public b:I

.field public c:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 37
    new-instance v0, Lcom/tkay/expressad/exoplayer/e/i$1;

    invoke-direct {v0}, Lcom/tkay/expressad/exoplayer/e/i$1;-><init>()V

    sput-object v0, Lcom/tkay/expressad/exoplayer/e/i;->a:Lcom/tkay/expressad/exoplayer/g/b/g$a;

    const-string v0, "^ [0-9a-fA-F]{8} ([0-9a-fA-F]{8}) ([0-9a-fA-F]{8})"

    .line 47
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/exoplayer/e/i;->f:Ljava/util/regex/Pattern;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 64
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 65
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/i;->b:I

    .line 66
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/i;->c:I

    return-void
.end method

.method private a(I)Z
    .locals 1

    shr-int/lit8 v0, p1, 0xc

    and-int/lit16 p1, p1, 0xfff

    if-gtz v0, :cond_1

    if-lez p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    return p1

    .line 79
    :cond_1
    :goto_0
    iput v0, p0, Lcom/tkay/expressad/exoplayer/e/i;->b:I

    .line 80
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/i;->c:I

    const/4 p1, 0x1

    return p1
.end method

.method private a(Ljava/lang/String;)Z
    .locals 4

    .line 121
    sget-object v0, Lcom/tkay/expressad/exoplayer/e/i;->f:Ljava/util/regex/Pattern;

    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object p1

    .line 122
    invoke-virtual {p1}, Ljava/util/regex/Matcher;->find()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    .line 124
    :try_start_0
    invoke-virtual {p1, v0}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x10

    invoke-static {v1, v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result v1

    const/4 v3, 0x2

    .line 125
    invoke-virtual {p1, v3}, Ljava/util/regex/Matcher;->group(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;I)I

    move-result p1

    if-gtz v1, :cond_0

    if-lez p1, :cond_1

    .line 127
    :cond_0
    iput v1, p0, Lcom/tkay/expressad/exoplayer/e/i;->b:I

    .line 128
    iput p1, p0, Lcom/tkay/expressad/exoplayer/e/i;->c:I
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    :cond_1
    const/4 p1, 0x0

    return p1
.end method


# virtual methods
.method public final a()Z
    .locals 2

    .line 142
    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/i;->b:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/e/i;->c:I

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final a(Lcom/tkay/expressad/exoplayer/g/a;)Z
    .locals 7

    const/4 v0, 0x0

    move v1, v0

    .line 93
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/g/a;->a()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 94
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/exoplayer/g/a;->a(I)Lcom/tkay/expressad/exoplayer/g/a$a;

    move-result-object v2

    .line 95
    instance-of v3, v2, Lcom/tkay/expressad/exoplayer/g/b/e;

    const-string v4, "iTunSMPB"

    const/4 v5, 0x1

    if-eqz v3, :cond_0

    .line 96
    check-cast v2, Lcom/tkay/expressad/exoplayer/g/b/e;

    .line 97
    iget-object v3, v2, Lcom/tkay/expressad/exoplayer/g/b/e;->c:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/g/b/e;->d:Ljava/lang/String;

    .line 98
    invoke-direct {p0, v2}, Lcom/tkay/expressad/exoplayer/e/i;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v5

    .line 101
    :cond_0
    instance-of v3, v2, Lcom/tkay/expressad/exoplayer/g/b/i;

    if-eqz v3, :cond_1

    .line 102
    check-cast v2, Lcom/tkay/expressad/exoplayer/g/b/i;

    .line 103
    iget-object v3, v2, Lcom/tkay/expressad/exoplayer/g/b/i;->b:Ljava/lang/String;

    const-string v6, "com.apple.iTunes"

    invoke-virtual {v6, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    iget-object v3, v2, Lcom/tkay/expressad/exoplayer/g/b/i;->c:Ljava/lang/String;

    .line 104
    invoke-virtual {v4, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    iget-object v2, v2, Lcom/tkay/expressad/exoplayer/g/b/i;->d:Ljava/lang/String;

    .line 105
    invoke-direct {p0, v2}, Lcom/tkay/expressad/exoplayer/e/i;->a(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v5

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return v0
.end method
