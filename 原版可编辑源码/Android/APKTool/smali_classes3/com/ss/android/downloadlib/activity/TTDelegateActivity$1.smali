.class Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/config/n;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->df(Ljava/lang/String;[Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

.field private q:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/app/Activity;",
            ">;"
        }
    .end annotation
.end field

.field final synthetic rg:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/activity/TTDelegateActivity;Ljava/lang/String;)V
    .locals 0

    .line 421
    iput-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;->df:Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    iput-object p2, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;->rg:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 423
    new-instance p1, Ljava/lang/ref/WeakReference;

    iget-object p2, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;->df:Lcom/ss/android/downloadlib/activity/TTDelegateActivity;

    invoke-direct {p1, p2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;->q:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 1

    .line 427
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;->rg:Ljava/lang/String;

    invoke-static {v0}, Lcom/ss/android/downloadlib/utils/rz;->rg(Ljava/lang/String;)V

    .line 428
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;->q:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Activity;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void
.end method

.method public rg(Ljava/lang/String;)V
    .locals 1

    .line 433
    iget-object v0, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;->rg:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/ss/android/downloadlib/utils/rz;->rg(Ljava/lang/String;Ljava/lang/String;)V

    .line 434
    iget-object p1, p0, Lcom/ss/android/downloadlib/activity/TTDelegateActivity$1;->q:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/app/Activity;

    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/app/Activity;)V

    return-void
.end method
