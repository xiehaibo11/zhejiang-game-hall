.class public final Lcom/tkay/expressad/reward/b/a$a;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/reward/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/b/a;

.field private b:Lcom/tkay/expressad/reward/a/a;

.field private c:I

.field private d:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/reward/b/a;Lcom/tkay/expressad/reward/a/a;)V
    .locals 0

    .line 2574
    iput-object p1, p0, Lcom/tkay/expressad/reward/b/a$a;->a:Lcom/tkay/expressad/reward/b/a;

    .line 2575
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2576
    iput-object p2, p0, Lcom/tkay/expressad/reward/b/a$a;->b:Lcom/tkay/expressad/reward/a/a;

    const/4 p1, 0x1

    .line 2577
    iput p1, p0, Lcom/tkay/expressad/reward/b/a$a;->c:I

    .line 2578
    iput-boolean p1, p0, Lcom/tkay/expressad/reward/b/a$a;->d:Z

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 2583
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "adSource="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/expressad/reward/b/a$a;->c:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " CommonCancelTimeTask mIsDevCall:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/tkay/expressad/reward/b/a$a;->d:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 2596
    iget-object v0, p0, Lcom/tkay/expressad/reward/b/a$a;->a:Lcom/tkay/expressad/reward/b/a;

    const-string v1, "v3 is timeout"

    invoke-static {v0, v1}, Lcom/tkay/expressad/reward/b/a;->a(Lcom/tkay/expressad/reward/b/a;Ljava/lang/String;)V

    return-void
.end method
