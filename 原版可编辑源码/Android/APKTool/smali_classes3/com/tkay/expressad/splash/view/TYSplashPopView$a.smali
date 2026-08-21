.class public Lcom/tkay/expressad/splash/view/TYSplashPopView$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/splash/view/TYSplashPopView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:I

.field private d:Lcom/tkay/expressad/foundation/d/c;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 688
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 689
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->a:Ljava/lang/String;

    .line 690
    iput-object p2, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->b:Ljava/lang/String;

    .line 691
    iput p3, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->c:I

    .line 692
    iput-object p4, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->d:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method private a(I)V
    .locals 0

    .line 716
    iput p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->c:I

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 724
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->d:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 0

    .line 700
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->a:Ljava/lang/String;

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 708
    iput-object p1, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 696
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 704
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c()I
    .locals 1

    .line 712
    iget v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->c:I

    return v0
.end method

.method public final d()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    .line 720
    iget-object v0, p0, Lcom/tkay/expressad/splash/view/TYSplashPopView$a;->d:Lcom/tkay/expressad/foundation/d/c;

    return-object v0
.end method
