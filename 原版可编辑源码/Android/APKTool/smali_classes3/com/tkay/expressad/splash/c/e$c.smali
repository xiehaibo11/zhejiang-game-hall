.class public final Lcom/tkay/expressad/splash/c/e$c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/splash/c/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "c"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Lcom/tkay/expressad/foundation/d/c;

.field private d:Ljava/lang/String;

.field private e:Z

.field private f:I

.field private g:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 193
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private g()Z
    .locals 1

    .line 203
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/e$c;->g:Z

    return v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 211
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/e$c;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 255
    iput p1, p0, Lcom/tkay/expressad/splash/c/e$c;->f:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 239
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/e$c;->c:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 215
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/e$c;->d:Ljava/lang/String;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 207
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/c/e$c;->g:Z

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 219
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/e$c;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 223
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/e$c;->a:Ljava/lang/String;

    return-void
.end method

.method public final b(Z)V
    .locals 0

    .line 247
    iput-boolean p1, p0, Lcom/tkay/expressad/splash/c/e$c;->e:Z

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/e$c;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 231
    iput-object p1, p0, Lcom/tkay/expressad/splash/c/e$c;->b:Ljava/lang/String;

    return-void
.end method

.method public final d()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 235
    iget-object v0, p0, Lcom/tkay/expressad/splash/c/e$c;->c:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method

.method public final e()Z
    .locals 1

    .line 243
    iget-boolean v0, p0, Lcom/tkay/expressad/splash/c/e$c;->e:Z

    return v0
.end method

.method public final f()I
    .locals 1

    .line 251
    iget v0, p0, Lcom/tkay/expressad/splash/c/e$c;->f:I

    return v0
.end method
