.class public final Lcom/tkay/core/common/f/af;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/f/af$a;
    }
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/tkay/core/common/f/af;->d:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 44
    iput-object p1, p0, Lcom/tkay/core/common/f/af;->d:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 48
    iget-object v0, p0, Lcom/tkay/core/common/f/af;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/tkay/core/common/f/af;->a:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 56
    iget-object v0, p0, Lcom/tkay/core/common/f/af;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c(Ljava/lang/String;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/core/common/f/af;->b:Ljava/lang/String;

    return-void
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/tkay/core/common/f/af;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    .line 68
    iput-object p1, p0, Lcom/tkay/core/common/f/af;->c:Ljava/lang/String;

    return-void
.end method
