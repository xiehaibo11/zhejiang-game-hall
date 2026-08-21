.class public final Lcom/qihoo360/loader2/MP$PluginBinder;
.super Ljava/lang/Object;
.source "MP.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/MP;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "PluginBinder"
.end annotation


# instance fields
.field public final binder:Landroid/os/IBinder;

.field public final name:Ljava/lang/String;

.field public final pid:I

.field public final plugin:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;ILandroid/os/IBinder;)V
    .locals 0

    .line 455
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 456
    iput-object p1, p0, Lcom/qihoo360/loader2/MP$PluginBinder;->plugin:Ljava/lang/String;

    .line 457
    iput-object p2, p0, Lcom/qihoo360/loader2/MP$PluginBinder;->name:Ljava/lang/String;

    .line 458
    iput-object p4, p0, Lcom/qihoo360/loader2/MP$PluginBinder;->binder:Landroid/os/IBinder;

    .line 459
    iput p3, p0, Lcom/qihoo360/loader2/MP$PluginBinder;->pid:I

    return-void
.end method
