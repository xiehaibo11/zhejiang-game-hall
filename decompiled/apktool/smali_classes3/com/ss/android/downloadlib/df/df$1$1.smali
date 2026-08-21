.class Lcom/ss/android/downloadlib/df/df$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/df/ux;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/df/df$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/df/df$1;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/df/df$1;)V
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/ss/android/downloadlib/df/df$1$1;->rg:Lcom/ss/android/downloadlib/df/df$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Z)V
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/ss/android/downloadlib/df/df$1$1;->rg:Lcom/ss/android/downloadlib/df/df$1;

    iget-object v0, v0, Lcom/ss/android/downloadlib/df/df$1;->df:Lcom/ss/android/downloadlib/df/fw;

    invoke-interface {v0, p1}, Lcom/ss/android/downloadlib/df/fw;->rg(Z)V

    return-void
.end method
