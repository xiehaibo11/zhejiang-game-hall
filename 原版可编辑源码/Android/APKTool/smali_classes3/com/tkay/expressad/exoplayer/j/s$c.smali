.class public Lcom/tkay/expressad/exoplayer/j/s$c;
.super Ljava/io/IOException;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/j/s;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "c"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/j/s$c$a;
    }
.end annotation


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3


# instance fields
.field public final d:I

.field public final e:Lcom/tkay/expressad/exoplayer/j/k;


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/j/k;I)V
    .locals 0

    .line 252
    invoke-direct {p0}, Ljava/io/IOException;-><init>()V

    .line 253
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/j/s$c;->e:Lcom/tkay/expressad/exoplayer/j/k;

    .line 254
    iput p2, p0, Lcom/tkay/expressad/exoplayer/j/s$c;->d:I

    return-void
.end method

.method public constructor <init>(Ljava/io/IOException;Lcom/tkay/expressad/exoplayer/j/k;I)V
    .locals 0

    .line 264
    invoke-direct {p0, p1}, Ljava/io/IOException;-><init>(Ljava/lang/Throwable;)V

    .line 265
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/j/s$c;->e:Lcom/tkay/expressad/exoplayer/j/k;

    .line 266
    iput p3, p0, Lcom/tkay/expressad/exoplayer/j/s$c;->d:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Lcom/tkay/expressad/exoplayer/j/k;)V
    .locals 0

    .line 258
    invoke-direct {p0, p1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    .line 259
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/j/s$c;->e:Lcom/tkay/expressad/exoplayer/j/k;

    const/4 p1, 0x1

    .line 260
    iput p1, p0, Lcom/tkay/expressad/exoplayer/j/s$c;->d:I

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/io/IOException;Lcom/tkay/expressad/exoplayer/j/k;)V
    .locals 0

    .line 271
    invoke-direct {p0, p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 272
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/j/s$c;->e:Lcom/tkay/expressad/exoplayer/j/k;

    const/4 p1, 0x1

    .line 273
    iput p1, p0, Lcom/tkay/expressad/exoplayer/j/s$c;->d:I

    return-void
.end method
