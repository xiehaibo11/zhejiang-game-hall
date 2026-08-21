.class final Lcom/tkay/interstitial/a/a$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/interstitial/a/a$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/interstitial/a/a$1;


# direct methods
.method constructor <init>(Lcom/tkay/interstitial/a/a$1;)V
    .locals 0

    .line 157
    iput-object p1, p0, Lcom/tkay/interstitial/a/a$1$1;->a:Lcom/tkay/interstitial/a/a$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 160
    iget-object v0, p0, Lcom/tkay/interstitial/a/a$1$1;->a:Lcom/tkay/interstitial/a/a$1;

    iget-object v0, v0, Lcom/tkay/interstitial/a/a$1;->h:Lcom/tkay/interstitial/a/a;

    iget-object v1, p0, Lcom/tkay/interstitial/a/a$1$1;->a:Lcom/tkay/interstitial/a/a$1;

    iget-object v1, v1, Lcom/tkay/interstitial/a/a$1;->b:Landroid/app/Activity;

    invoke-static {v0, v1}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/interstitial/a/a;Landroid/app/Activity;)V

    return-void
.end method
