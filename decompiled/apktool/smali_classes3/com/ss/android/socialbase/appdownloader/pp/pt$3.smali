.class final Lcom/ss/android/socialbase/appdownloader/pp/pt$3;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/pp/pt;->rg(Landroid/app/Activity;Lcom/ss/android/socialbase/appdownloader/q/f;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/socialbase/appdownloader/q/f;

.field final synthetic rg:Landroid/app/Activity;


# direct methods
.method constructor <init>(Landroid/app/Activity;Lcom/ss/android/socialbase/appdownloader/q/f;)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pp/pt$3;->rg:Landroid/app/Activity;

    iput-object p2, p0, Lcom/ss/android/socialbase/appdownloader/pp/pt$3;->df:Lcom/ss/android/socialbase/appdownloader/q/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1

    .line 80
    iget-object p2, p0, Lcom/ss/android/socialbase/appdownloader/pp/pt$3;->rg:Landroid/app/Activity;

    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pp/pt$3;->df:Lcom/ss/android/socialbase/appdownloader/q/f;

    invoke-static {p2, v0}, Lcom/ss/android/socialbase/appdownloader/pp/pt;->df(Landroid/app/Activity;Lcom/ss/android/socialbase/appdownloader/q/f;)V

    .line 81
    invoke-interface {p1}, Landroid/content/DialogInterface;->cancel()V

    const/4 p1, 0x0

    .line 82
    invoke-static {p1}, Lcom/ss/android/socialbase/appdownloader/pp/pt;->rg(Landroid/app/AlertDialog;)Landroid/app/AlertDialog;

    return-void
.end method
