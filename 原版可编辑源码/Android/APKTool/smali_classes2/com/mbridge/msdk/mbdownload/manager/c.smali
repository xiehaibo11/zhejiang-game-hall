.class public final Lcom/mbridge/msdk/mbdownload/manager/c;
.super Ljava/lang/Object;
.source "UpdateObject.java"


# instance fields
.field private a:I

.field private b:I

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 3
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 4
    iput v0, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->a:I

    const/4 v0, 0x0

    .line 5
    iput v0, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->b:I

    const-string v0, ""

    .line 6
    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->c:Ljava/lang/String;

    .line 7
    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->d:Ljava/lang/String;

    .line 8
    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->e:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 12
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->f:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 24
    iput p1, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->a:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 16
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->f:Ljava/lang/String;

    return-void
.end method

.method public final b()I
    .locals 1

    .line 20
    iget v0, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->a:I

    return v0
.end method

.method public final b(I)V
    .locals 0

    .line 32
    iput p1, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->b:I

    return-void
.end method

.method public final c()I
    .locals 1

    .line 28
    iget v0, p0, Lcom/mbridge/msdk/mbdownload/manager/c;->b:I

    return v0
.end method
